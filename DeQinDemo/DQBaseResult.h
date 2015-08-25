//
//  DQBaseJudge.h
//  DeQinDemo
//
//  Created by hufeng on 15/8/23.
//  Copyright (c) 2015年 hf-27. All rights reserved.
//

// 返回结果的数据模型

#import <Foundation/Foundation.h>

@interface DQBaseResult : NSObject


/**
 *  主业收购
 */
@property (nonatomic, assign) int dqGridBuy;
/**
 *  集体企业收购
 */
@property (nonatomic, assign) int dqGroupBuy;
/**
 *  职工持股企业员工收购
 */
@property (nonatomic, assign) int dqInnerBuy;
/**
 *  外部企业收购职工股权
 */
@property (nonatomic, assign) int dqOuterBuy;
/**
 *  外部投资公司收购
 */
@property (nonatomic, assign) int dqBornFund;
/**
 *  关闭清算
 */
@property (nonatomic, assign) int dqShutDown;
/**
 *  股权清退
 */
@property (nonatomic, assign) int dqEquityRepaying;
/**
 *  职工持股企业出资对外投资其他企业
 */
@property (nonatomic, assign) int dqEmoployeeFund;
/**
 *  市场化业务转型
 */
@property (nonatomic, assign) int dqMarketChange;
/**
 *  关联交易价格公允分析报告
 */
@property (nonatomic, assign) int dqTradePrice;
/**
 *  脱钩处理
 */
@property (nonatomic, assign) int dqColdDeal;



@end
