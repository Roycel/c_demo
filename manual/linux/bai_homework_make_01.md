## 作业要求



学习交叉编译（编译到x86Ubuntu，编译到嵌入式Linux），使用make编译。



## 完成情况

- [x] 编译到x86Ubuntu

- [x] 编译到嵌入式Linux

- [x] 使用make编译

### 具体情况

---

#### 编译到x86Ubuntu

1. 需具备基本的编译环境，Ubuntu18.04系统镜像中没有安装，可通过软件包build-essential安装

   ~~~shell
   # 安装build-essential
   roycell@ubuntu:~$ sudo apt-get install build-essential
   # 安装完成后查看gcc版本
   roycell@ubuntu:~$ gcc -v
   	gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1~18.04) 
   # gcc安装完毕
   ~~~

   

2. 通过编译hello.c（打印hello）来验证功能

   ~~~shell
   # 编译hello.c
   roycell@ubuntu:~/program$ gcc hello.c -o hello1
   # 查看hello1的类型，为64位小端x86
   roycell@ubuntu:~/program$ file hello1
   	hello1: ELF 64-bit LSB shared object, x86-64, version 1 (SYSV), dynamically linked, interpreter /lib64/l, for GNU/Linux 3.2.0, BuildID[sha1]=15962b1b828c3862c52053d15c9daf67886bb4e4, not stripped
   # 执行hello1查看效果
   roycell@ubuntu:~/program$ ./hello1
   hello
   # 正常运行
   ~~~
   
   

#### 编译到嵌入式linux

1. 同样需要编译环境，这里需要的是gcc-arm-linux-gnueabihf。

   ​	由于命名过长，网上出现了很多种不同的拼写，耗费了很多时间，最终确认gcc-arm-linux-gnueabihf为正确的软件包名称拼写。其中，周立功嵌入式Linux开发手册中的拼写是错误的。其写为arm-linux-gnueabihf-gcc，实际上这是安装完成后，调用时使用的命令名。应该是编者长期未配置过环境导致的混淆。该手册中对于gcc-arm-none-eabi和gcc-arm-linux-gnueabihf均有使用，但均未对两者本身做说明。

   ​	关于gcc-arm-none-eabi，该软件包是给cortex-A/R/M系列芯片不带操作系统的程序编译的编译器，Ubuntu16.04后的软件源自带gcc-arm-none-eabi软件包。经我验证，阿里源的Ubuntu18.04软件源确实包含，并已安装成功，但是M系列的裸机程序编译不好通过打印hello的方式进行验证，暂时没有用它编译过程序。

   ​	关于gcc-arm-linux-gnueabihf，该软件包是由 Linaro 公司基于GCC推出的的ARM交叉编译工具。可用于交叉编译ARM系统中所有环节的代码，包括裸机程序、u-boot、Linux kernel、filesystem和App应用程序。

   ​	关于环境变量配置，网上都是下载的压缩包然后自行解压，配置环境变量添加路径，但是我通过软件包安装的方式似乎并不需要配置，暂时只是尝试了简单的编译，没有发现问题。

   ~~~shell
   # 安装gcc-arm-linux-gnueabihf软件包
   roycell@ubuntu:~$ sudo apt-get install gcc-arm-linux-gnueabihf
   # 检查版本
   roycell@ubuntu:~/program$ arm-linux-gnueabihf-gcc -v
   	gcc version 7.5.0 (Ubuntu/Linaro 7.5.0-3ubuntu1~18.04) 
   # 安装正常
   ~~~

2. 通过编译hello.c（打印hello）来验证功能

   ~~~shell
   # 编译hello.c
   roycell@ubuntu:~/program$ arm-linux-gnueabihf-gcc hello.c -o hello
   # 查看hello的类型，为32位小端ARM
   roycell@ubuntu:~/program$ file hello
   	hello: ELF 32-bit LSB shared object, ARM, EABI5 version 1 (SYSV), dynamically linked, interpreter /lib/ld-, for GNU/Linux 3.2.0, BuildID[sha1]=8925d4c440fe105827cf70fd79d61c4f00ec8671, not stripped
   
   ~~~

#### 使用make编译

1. 用make编译到x86Ubuntu

   ~~~shell
   # Makefile文件内容
   SRC=hello.c
   OBJ=-o hello
   .PHONY:hello
   hello:
           gcc $(SRC) $(OBJ)
   # 编写Makefile
   roycell@ubuntu:~/program$ vim Makefile
   # 执行make命令
   roycell@ubuntu:~/program$ make
   	gcc hello.c -o hello
   # 查看编译出文件类型
   roycell@ubuntu:~/program$ file hello
   	hello: ELF 64-bit LSB shared object, x86-64
   # 执行hello
   roycell@ubuntu:~/program$ ./hello
   	hello
   ~~~

2. 用make编译到嵌入式Linux

   ~~~shell
   # Makefile文件内容
   SRC=hello.c
   OBJ=-o hello
   CMDNAME=arm-linux-gnueabihf-gcc
   .PHONY:hello
   hello:
           $(CMDNAME) $(SRC) $(OBJ)
   # 编写Makefile
   roycell@ubuntu:~/program$ vim Makefile
   # 执行make命令
   roycell@ubuntu:~/program$ make
   	arm-linux-gnueabihf-gcc hello.c -o hello
   # 查看编译出文件类型
   roycell@ubuntu:~/program$ file hello
   	hello: ELF 32-bit LSB shared object, ARM, EABI5
   ~~~

   

##### 补充

​	18.04Ubuntu镜像也没有Vim，需要安装一下