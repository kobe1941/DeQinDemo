//
//  DQBase.h
//  DeQinDemo
//
//  Created by hufeng on 15/8/23.
//  Copyright (c) 2015年 hf-27. All rights reserved.
//

// 形容一个公司状态的数据模型

#import <Foundation/Foundation.h>



@interface DQBaseData : NSObject

// 前缀为dq

/**
 *  是否违反主辅分离原则，是否
 */
@property (nonatomic, assign) int dqPoliceComply;
/**
 *  是否出现两倍余额问题，是否
 */
@property (nonatomic, assign) int dqTwiceRemain;
/**
 *  是否在职员工规模大，是否
 */
@property (nonatomic, assign) int dqEmoployeeState;
/**
 *  是否经营效益差，是否
 */
@property (nonatomic, assign) int dqBusinessBenefitsBad;
/**
 *  是否100%主业员工控股，是否
 */
@property (nonatomic, assign) int dqFullEmoployeeControl;
/**
 *  是否持股比例高，是否
 */
@property (nonatomic, assign) int dqStrongShareControl;
/**
 *  是否经营效益优，是否
 */
@property (nonatomic, assign) int dqBusinessBenefitsGood;
/**
 *  是否资产规模大，是否
 */
@property (nonatomic, assign) int dqAssetState;
/**
 *  是否经营状况差，是否
 */
@property (nonatomic, assign) int dqBusinessStateWorse;
/**
 *  是否关联比例低，是否
 */
@property (nonatomic, assign) int dqAssociateRatio;


@end
