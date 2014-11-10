git checkout . && git clean -xdf
如果你有的修改以及加入暂存区的话
那么 
git reset --hard
git clean -xdf
 git reset --mixed：此为默认方式，不带任何参数的git reset，即时这种方式，它回退到某个版本，只保留源码，回退commit和index信息

    git reset --soft：回退到某个版本，只回退了commit的信息，不会恢复到index file一级。如果还要提交，直接commit即可

    git reset --hard：彻底回退到某个版本，本地的源码也会变为上一个版本的内容
http://blog.csdn.net/kazeik/article/details/9113891
然后: git  init ：这时初始化一个仓库。 成功后会有下面的提示：Initialized empty Git repository in d:.......

然后：git add README.md 。这里是添加README这个文件；

然后 git add .  ：要注意后面的点。这里是添加整个目录，也可以像git add README.md一样。添加单个文件；

然后 git commit ......  
然后等这些文件全部提交到本地仓库后，再输入你要提交的仓库地址，如我的：https://github.com/kazeik/W_IMsg.git
然后： git push -u origin master 这里就开始准备提交到网络上了，

这里会要你输入用户名和密码。密码是不可见的。

当你输入对了后，就会自动提交。

若你看得仔细的话，你会发现我的命令操作都是按GITHUB上提示一步步来的。。

这样，代码就提交到网络上去了；
修改代码提交暂时还没有弄过。改天再写
