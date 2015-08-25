//
//  DQBase.m
//  DeQinDemo
//
//  Created by hufeng on 15/8/23.
//  Copyright (c) 2015年 hf-27. All rights reserved.
//

#import "DQBaseData.h"

@implementation DQBaseData

- (NSString *)description
{
    return [NSString stringWithFormat:@"dqPoliceComply = %d,dqTwiceRemain = %d,dqEmoployeeState = %d,dqBusinessBenefitsBad = %d,dqFullEmoployeeControl = %d,dqStrongShareControl = %d,dqBusinessBenefitsGood = %d,dqAssetState = %d,dqBusinessStateWorse = %d,dqAssociateRatio = %d",_dqPoliceComply,_dqTwiceRemain,_dqEmoployeeState,_dqBusinessBenefitsBad,_dqFullEmoployeeControl,_dqStrongShareControl,_dqBusinessBenefitsGood,_dqAssetState,_dqBusinessStateWorse,_dqAssociateRatio];
}

@end
