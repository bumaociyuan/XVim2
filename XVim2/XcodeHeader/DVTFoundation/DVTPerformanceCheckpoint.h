//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DVTPerformanceCheckpoint : NSObject
{
    NSString *_label;
    double _checkpointTime;
    id _statisticValues[0];
}

+ (id)newCheckpointWithLabel:(id)arg1;
- (void).cxx_destruct;
@property(readonly) double checkpointTime; // @synthesize checkpointTime=_checkpointTime;
@property(readonly, copy) NSString *label; // @synthesize label=_label;
- (void)iterateStatisticValues:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithLabel:(id)arg1;

@end

