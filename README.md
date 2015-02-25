# CocosBuilder-3.0-alpha5
用于Cocos2dx或Cocos-iphone游戏开发的图形编辑工具集

# 简介

CocosBuilder是一个辅助用户创建Cocos2dx或Cocos-iphone游戏的图形编辑工具集，使用此工具可以快速的制作场景、动画、粒子效果等等，目前此产品仅能运行在Max OSX系统上。

注意：

1、CocosBuilder项目已经停止更新，最后一个tag版本是v3.0-alpha5。

2、CocosBuilder项目已经更名为SpriteBuider，仅支持Cocos2d-iphone

3、使用Cocos2dx的用户，一定要注意CCBReader组件包的版本号与CocosBuilder中使用的CCBReader版本号要对应

# CocosBuilder

CocosBuilder is a free tool (released under MIT-licence) for rapidly developing games and apps. CocosBuilder is built for Cocos2d's Javascript bindings, which means that your code, animations, and interfaces will run unmodified on iPhone, Android and HTML 5. If you prefer to go native all the way, there are readers available for cocos2d-iphone and cocos2d-x.

For more info and binary downloads, please visit [cocosbuilder.com](http://cocosbuilder.com).

## Getting started with the source

Cocos2d and other extensions are provided as a submodules to this project. To be able to compile the source code you need first check out the module. Change directory into the top (this) directory of CocosBuilder and run:

cd scripts
./BuildDistribution.sh

此源码提取自CocosBuilder项目中的tags/v3.0-alpha5,已经将对应版本的组件包全部提取，只须运行BuildDistribution.sh就可以生成App

When building CocosBuilder, make sure that "CocosBuilder" is the selected target (it may be some of the plug-in targets by default).

## Still having trouble compiling CocosBuilder?

It is most likely still a problem with the submodules. Edit the .git/config file and remove the lines that are referencing submodules. Then change directory into the top directory and run:

git submodule update --init

When building CocosBuilder, make sure that "CocosBuilder" is the selected target (it may be some of the plug-in targets by default).

## Running CocosPlayer

CocosBuilder has a companioning app called CocosPlayer. CocosPlayer let's you run your app directly on the device without compiling the complete project. All you need to set it up is running CocosPlayer on the same wireless network as CocosBuilder and they will automatically connect with each other.

To install CocosPlayer on your device (or in Simulator) you need to get the source code, either by downloading it from cocosbuilder.com or by cloning the git project (see above). Open the CocosPlayer project and install the app from Xcode.

## License (MIT)
Copyright (c) 2011 Viktor Lidholt

Copyright (c) 2012 Zynga Inc.

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

CocosBuilder: [http://www.cocosbuilder.com](http://www.cocosbuilder.com)
