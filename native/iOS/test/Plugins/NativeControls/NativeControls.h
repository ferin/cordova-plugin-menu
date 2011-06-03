//
//  NativeControls.h
//  
//
//  Created by Jesse MacFadyen on 10-02-03.
//  MIT Licensed

//  Originally this code was developed my Michael Nachbaur
//  Formerly -> PhoneGap :: UIControls.h
//  Created by Michael Nachbaur on 13/04/09.
//  Copyright 2009 Decaf Ninja Software. All rights reserved.

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <UIKit/UITabBar.h>
#import <UIKit/UIToolbar.h>
#import "PhoneGapCommand.h"

@interface NativeControls : PhoneGapCommand <UITabBarDelegate, UIActionSheetDelegate> {

}

@property (nonatomic, retain) UITabBar* tabBar;
@property (nonatomic, retain) UIToolbar* toolBar;
@property (nonatomic, retain) NSMutableDictionary* tabBarItems;
@property (nonatomic, retain) NSMutableDictionary* toolBarItems;


/* Tab Bar methods 
 */
- (void) createTabBar:(NSArray*)arguments withDict:(NSDictionary*)options;
- (void) removeTabBar:(NSArray*)arguments withDict:(NSDictionary*)options;
- (void) createTabBarItem:(NSArray*)arguments withDict:(NSDictionary*)options;
- (void) removeTabBarItem:(NSArray*)arguments withDict:(NSDictionary*)options;
- (void) showTabBar:(NSArray*)arguments withDict:(NSDictionary*)options;
- (void) hideTabBar:(NSArray*)arguments withDict:(NSDictionary*)options;
- (void) updateTabBarItem:(NSArray*)arguments withDict:(NSDictionary*)options;
- (void) selectTabBarItem:(NSArray*)arguments withDict:(NSDictionary*)options;

/* Tool Bar methods
 */
- (void) createToolBar:(NSArray*)arguments withDict:(NSDictionary*)options;
- (void) removeToolBar:(NSArray*)arguments withDict:(NSDictionary*)options;
- (void) createToolBarItem:(NSArray*)arguments withDict:(NSDictionary*)options;
- (void) removeToolBarItem:(NSArray*)arguments withDict:(NSDictionary*)options;
- (void) showToolBar:(NSArray*)arguments withDict:(NSDictionary*)options;
- (void) hideToolBar:(NSArray*)arguments withDict:(NSDictionary*)options;

@end