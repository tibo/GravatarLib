//
//  GravatarImageAppDelegate.h
//  GravatarImage
//
//  Created by Thibaut LE LEVIER on 04/05/11.
//  Copyright 2011 Thibaut LE LEVIER. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GravatarImageAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@end

