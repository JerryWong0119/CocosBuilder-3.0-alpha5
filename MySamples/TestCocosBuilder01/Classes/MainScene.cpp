//
//  MainScene.cpp
//  TestCocosBuilder01
//
//  Created by JiaNiao on 15/3/14.
//
//

#include "MainScene.h"
#include "cocos2d.h"
#include "cocos-ext.h"

USING_NS_CC;
USING_NS_CC_EXT;

MainScene::MainScene():helloLabel(NULL){}
MainScene::~MainScene(){
    CC_SAFE_RELEASE_NULL(helloLabel);
}

CCScene* MainScene::scene(){
    CCScene* scene = CCScene::create();
    //MainScene* layer = MainScene::create();
    //scene->addChild(layer);
    
    CCNodeLoaderLibrary* lib = CCNodeLoaderLibrary::newDefaultCCNodeLoaderLibrary();
    lib->registerCCNodeLoader("MainSceneLayer", MainSceneLoader::loader());
    CCBReader* reader = new CCBReader(lib);
    MainScene* node = (MainScene*)reader->readNodeGraphFromFile("CCBIFiles/MainScene.ccbi", scene);
    
    //reader->release();
    reader->autorelease();
    
    
    if (NULL!=node) {
        node->setAnimationManager(reader->getAnimationManager());
        scene->addChild(node);
    }
    
    return scene;
}

bool MainScene::onAssignCCBMemberVariable(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::CCNode *pNode){
    CCB_MEMBERVARIABLEASSIGNER_GLUE(this, "helloLabel", CCLabelTTF*, helloLabel);
    return true;
}

void MainScene::onNodeLoaded(cocos2d::CCNode *pNode, cocos2d::extension::CCNodeLoader *pNodeLoader){
    helloLabel->setString("CCBI资源加载完毕了");
}

SEL_MenuHandler MainScene::onResolveCCBCCMenuItemSelector(CCObject * pTarget, const char* pSelectorName)
{
    CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this, "onButtonPress", MainScene::onButtonPress);
    return NULL;
}

SEL_CCControlHandler MainScene::onResolveCCBCCControlSelector(CCObject * pTarget, const char* pSelectorName){
    CCB_SELECTORRESOLVER_CCCONTROL_GLUE(this, "onButtonClick", MainScene::onButtonClick);
    return NULL;
}

void MainScene::onButtonPress(CCObject *sender){
    helloLabel->setString("CCBCCMenuItemSelector被点击了");
    //animationMgr->runAnimationsForSequenceNamedTweenDuration("shakebutton", 0.3f);
}

void MainScene::onButtonClick(CCObject *sender, CCControlEvent pCCControlEvent){
    helloLabel->setString("CCBCCControlSelector被点击了");
    //animationMgr->runAnimationsForSequenceNamedTweenDuration("shakebutton", 0.3f);
}

void MainScene::setAnimationManager(cocos2d::extension::CCBAnimationManager *value){
    //animationMgr->release();animationMgr=NULL;
    CC_SAFE_RELEASE_NULL(animationMgr);
    animationMgr=value;
    CC_SAFE_RETAIN(animationMgr);
    //    animationMgr->retain();
}
