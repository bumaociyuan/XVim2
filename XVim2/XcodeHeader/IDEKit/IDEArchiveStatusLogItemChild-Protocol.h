//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class NSArray, NSAttributedString;

@protocol IDEArchiveStatusLogItemChild <NSObject>
@property(readonly) NSArray *children;
@property(readonly) NSAttributedString *attributedString;
@property(readonly) BOOL isNotice;
@property(readonly) BOOL isWarning;
@property(readonly) BOOL isError;
@end
