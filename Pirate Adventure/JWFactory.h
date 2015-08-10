//
//  JWFactory.h
//  Pirate Adventure
//
//  Created by Jason Williams on 2015-08-03.
//  Copyright (c) 2015 Jason Williams. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JWCharacter.h"
#import "JWBoss.h"

@interface JWFactory : NSObject

-(NSArray *)tiles;
-(JWCharacter *)character;
-(JWBoss *)boss;

@end
