//
//  Gravatar.h
//  GravatarImage
//
//  Created by Thibaut LE LEVIER on 04/05/11.
//  Copyright 2011 Thibaut LE LEVIER. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSString+MD5.h"

@interface Gravatar : NSObject {

}

+(NSURL*)gravatarURLForUserMail:(NSString*)mail;
+(NSURL*)gravatarURLForUserMail:(NSString*)mail withSize:(int)size;

@end
