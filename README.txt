一.新建git项目
http://blog.csdn.net/kazeik/article/details/9113891
件，写入不需要的件夹名或件，每个元素占一行即可，如
target
bin
*.db
然后: git  init ：这时初始化一个仓库。 成功后会有下面的提示：Initialized empty Git repository in d:.......

然后：git add README.md 。这里是添加README这个文件；

然后 git add .  ：要注意后面的点。这里是添加整个目录，也可以像git add README.md一样。添加单个文件；
或者 git add -u ：使用-u参数调用了git add命令,会将本地有改动(包括删除和修改)的已经追踪的文件标记到暂存区中
然后 git commit ......  
然后等这些文件全部提交到本地仓库后，再输入你要提交的仓库地址，如我的：https://github.com/kazeik/W_IMsg.git
然后： git push -u origin master 这里就开始准备提交到网络上了
件、件夹不提交
在仓库根目录下创建名称为“.gitignore”的git 常用操作：
Git常用操作命令收集：
1) 远程仓库相关命令
检出仓库：$ git clone git://github.com/jquery/jquery.git
查看远程仓库：$ git remote -v
件，将子模块的相关配置节点删除掉
4) 手动删除子模块残留的目录

5）忽略一些添加远程仓库：$ git remote add [name] [url]
删除远程仓库：$ git remote rm [name]
修改远程仓库：$ git remote set-url --push[name][newUrl]
拉取远程仓库：$ git pull [remoteName] [localBranchName]
推送远程仓库：$ git push [remoteName] [localBranchName]

2）分支(branch)操作相关命令
查看本地分支：$ git branch
查看远程分支：$ git branch -r
创建本地分支：$ git branch [name] ----注意新分支创建后不会自动切换为当前分支
切换分支：$ git checkout [name]
创建新分支并立即切换到新分支：$ git checkout -b [name]
删除分支：$ git branch -d [name] ---- -d选项只能删除已经参与了合并的分支，对于未有合并的分支是1法删除的。如果想强制删除一个分支，可以使用-D选项
合并分支：$ git merge [name] ----将名称为[name]的分支与当前分支合并
创建远程分支(本地分支push到远程)：$ git push origin [name]
删除远程分支：$ git push origin :heads/[name]
我从master分支创建了一个issue5560分支，做了一些修改后，使用git push origin master提交，但是显示的结果却是'Everything up-to-date'，发生问题的原因是git push origin master 在没有track远程分支的本地分支中默认提交的master分支，因为master分支默认指向了origin master 分支，这里要使用git push origin issue5560：master 就可以把issue5560推送到远程的master分支了。

    如果想把本地的某个分支test提交到远程仓库，并作为远程仓库的master分支，或者作为另外一个名叫test的分支，那么可以这么做。

件，将子模块的相关配置节点删除掉
3) 编辑“.git/config”$ git push origin test:master         // 提交本地test分支作为远程的master分支
$ git push origin test:test              // 提交本地test分支作为远程的test分支

如果想删除远程的分支呢？类似于上面，如果:左边的分支为空，那么将删除:右边的远程的分支。

$ git push origin :test              // 刚提交到远程的test将被删除，但是本地还会保存的，不用担心
3）版本(tag)操作相关命令
查看版本：$ git tag
创建版本：$ git tag [name]
删除版本：$ git tag -d [name]
查看远程版本：$ git tag -r
创建远程版本(本地版本push到远程)：$ git push origin [name]
删除远程版本：$ git push origin :refs/tags/[name]

4) 子模块(submodule)相关操作命令
添加子模块：$ git submodule add [url] [path]
如：$ git submodule add git://github.com/soberh/ui-libs.git src/main/webapp/ui-libs
初始化子模块：$ git submodule init ----只在首次检出仓库时运行一次就行
更新子模块：$ git submodule update ----每次更新或切换分支后都需要运行一下
删除子模块：（分4步走哦）
1)$ git rm --cached [path]
2) 编辑“.gitmodules”
git push -u origin HEAD:master

这里会要你输入用户名和密码。密码是不可见的。

当你输入对了后，就会自动提交。

若你看得仔细的话，你会发现我的命令操作都是按GITHUB上提示一步步来的。。

这样，代码就提交到网络上去了；

二.git checkout
git clone https://github.com/HelloWorld-PAT/PAT
git --global user.name [name]
git --global user.email [email]
git pull origin [name]
git merge master
git checkout master

三.git恢复版本
git checkout . && git clean -xdf
如果你有的修改以及加入暂存区的话
那么 
git reset --hard
git clean -xdf
    git reset --mixed：此为默认方式，不带任何参数的git reset，即时这种方式，它回退到某个版本，只保留源码，回退commit和index信息

    git reset --soft：回退到某个版本，只回退了commit的信息，不会恢复到index file一级。如果还要提交，直接commit即可

    git reset --hard：彻底回退到某个版本，本地的源码也会变为上一个版本的内容


