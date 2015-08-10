//
//  JWTile.h
//  Pirate Adventure
//
//  Created by Jason Williams on 2015-08-03.
//  Copyright (c) 2015 Jason Williams. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JWWeapon.h"
#import "JWArmor.h"

@interface JWTile : NSObject

@property (strong, nonatomic) NSString *story;
@property (strong, nonatomic) UIImage *backgroundImage;
@property (strong, nonatomic) NSString *actionButtonName;
@property (strong, nonatomic) JWWeapon *weapon;
@property (strong, nonatomic) JWArmor *armor;
@property (nonatomic) int healthEffect;


@end
