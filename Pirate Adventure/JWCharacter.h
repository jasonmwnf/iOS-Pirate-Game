//
//  JWCharacter.h
//  Pirate Adventure
//
//  Created by Jason Williams on 2015-08-10.
//  Copyright (c) 2015 Jason Williams. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JWArmor.h"
#import "JWWeapon.h"


@interface JWCharacter : NSObject

@property (strong, nonatomic) JWArmor *armor;
@property (strong, nonatomic) JWWeapon *weapon;
@property (nonatomic) int damage;
@property (nonatomic) int health;

@end
