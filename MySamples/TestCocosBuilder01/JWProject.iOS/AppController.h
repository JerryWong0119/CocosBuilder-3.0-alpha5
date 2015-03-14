/**
 * File: AppController.h
 *
 * @author JerryWong (13434260260@163.com)
 *
 */

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppController : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    RootViewController    *viewController;
}

@end

