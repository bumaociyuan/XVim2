//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DVTPlistParser : NSObject
{
    const unsigned short *begin;
    const unsigned short *curr;
    const unsigned short *end;
    NSString *errorString;
}

- (void).cxx_destruct;
- (id)errorString;
- (id)parseData:(id)arg1;
- (id)parseOldStylePropertyListOrStringsFile;
- (id)parsePlistObject:(BOOL)arg1;
- (id)parsePlistData;
- (int)getDataBytes:(char *)arg1 size:(int)arg2;
- (id)parsePlistDict;
- (id)parsePlistDictContent;
- (id)parsePlistArray;
- (id)parsePlistString:(BOOL)arg1;
- (id)parseUnquotedPlistString;
- (id)parseQuotedPlistStringWithQuote:(unsigned short)arg1;
- (unsigned short)getSlashedChar;
- (unsigned int)lineNumber;
- (void)advanceToNonSpace;

@end

