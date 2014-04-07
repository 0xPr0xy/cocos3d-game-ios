/**
 *  testAppDelegate.h
 *  test
 *
 *  Created by Peter IJlst on 07-04-14.
 *  Copyright Bureau BlauwGeel 2014. All rights reserved.
 */

#import <UIKit/UIKit.h>
#import "CC3DeviceCameraOverlayUIViewController.h"

@interface testAppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow* _window;
	CC3DeviceCameraOverlayUIViewController* _viewController;
}
@end
