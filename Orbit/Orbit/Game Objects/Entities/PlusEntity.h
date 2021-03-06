//
//  PlusEntity.h
//  Orbit
//
//  Created by Ken Hung on 8/28/11.
//  Copyright 2011 Cal Poly - SLO. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Entity.h"

@interface PlusEntity : Entity {
    
}

@property (nonatomic, assign) BOOL topRightDirection, topLeftDirection, bottomRightDirection, bottomLeftDirection, 
    inwardDirection, isInCenter;
@property (nonatomic, assign) CGFloat heightIncrement, widthIncrement;

- (id) initAtPosition: (CGPoint) position onSide: (EntitySide) side withNode: (CCNode *) node b2World: (b2World *) world HUD: (HUD *) playerHUD withStreak: (BOOL) enableSteak;
@end
