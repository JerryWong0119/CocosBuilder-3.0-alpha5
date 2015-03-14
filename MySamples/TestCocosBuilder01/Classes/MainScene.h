//
//  MainScene.h
//  TestCocosBuilder01
//
//  Created by JiaNiao on 15/3/14.
//
//

#ifndef TestCocosBuilder01_MainScene_h
#define TestCocosBuilder01_MainScene_h

#include <iostream>
#include "cocos2d.h"
#include "cocos-ext.h"

USING_NS_CC;
USING_NS_CC_EXT;

class MainScene:
public CCLayer
,public CCBMemberVariableAssigner
,public CCNodeLoaderListener
,public CCBSelectorResolver{
public:
    MainScene();
    ~MainScene();
    static cocos2d::CCScene* scene();
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_WITH_INIT_METHOD(MainScene, create);
    virtual bool onAssignCCBMemberVariable(CCObject* pTarget, const char* pMemberVariableName, CCNode* pNode);
    virtual void onNodeLoaded(CCNode * pNode, CCNodeLoader * pNodeLoader);
    
    virtual SEL_MenuHandler onResolveCCBCCMenuItemSelector(CCObject * pTarget, const char* pSelectorName);
    
    virtual SEL_CCControlHandler onResolveCCBCCControlSelector(CCObject * pTarget, const char* pSelectorName);
    void onButtonPress(CCObject* sender);
    void onButtonClick(CCObject* sender, CCControlEvent pCCControlEvent);
    void setAnimationManager(CCBAnimationManager* value);
private:
    CCLabelTTF* helloLabel;
    CCBAnimationManager* animationMgr;
};

class MainSceneLoader:public cocos2d::extension::CCLayerLoader{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(MainSceneLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(MainScene);};


#endif
