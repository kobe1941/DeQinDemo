//
//  DQBaseJudge.m
//  DeQinDemo
//
//  Created by hufeng on 15/8/23.
//  Copyright (c) 2015年 hf-27. All rights reserved.
//

#import "DQBaseResult.h"

@implementation DQBaseResult

- (NSString *)description
{
    return [NSString stringWithFormat:@"dqGridBuy = %d,dqGroupBuy = %d,dqInnerBuy = %d,dqOuterBuy = %d,dqBornFund = %d,dqShutDown = %d,dqEquityRepaying = %d,dqEmoployeeFund = %d,dqMarketChange = %d,dqTradePrice = %d,dqColdDeal = %d",_dqGridBuy,_dqGroupBuy,_dqInnerBuy,_dqOuterBuy,_dqBornFund,_dqShutDown,_dqEquityRepaying,_dqEmoployeeFund,_dqMarketChange,_dqTradePrice,_dqColdDeal];
}

@end
