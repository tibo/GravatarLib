//
//  Gravatar.m
//  GravatarImage
//
//  Created by Thibaut LE LEVIER on 04/05/11.
//  Copyright 2011 Thibaut LE LEVIER. All rights reserved.
//

#import "Gravatar.h"


@implementation Gravatar

+(NSURL*)gravatarURLForUserMail:(NSString*)mail
{
	return [NSURL URLWithString:[NSString stringWithFormat:@"http://www.gravatar.com/avatar/%@?d=mm",[mail md5Hash]]];
}

+(NSURL*)gravatarURLForUserMail:(NSString*)mail withSize:(int)size
{
	if (size>512) 
		size = 512;
	
	return [NSURL URLWithString:[NSString stringWithFormat:@"http://www.gravatar.com/avatar/%@?s=%i&d=mm",[mail md5Hash],size]];
}

@end
