//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/NSObject-Protocol.h>

@class NSError, NSURLAuthenticationChallenge, NSURLConnection, NSURLProtectionSpace;

@protocol NSURLConnectionDelegate <NSObject>

@optional
- (void)connection:(NSURLConnection *)arg1 didCancelAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (void)connection:(NSURLConnection *)arg1 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (BOOL)connection:(NSURLConnection *)arg1 canAuthenticateAgainstProtectionSpace:(NSURLProtectionSpace *)arg2;
- (void)connection:(NSURLConnection *)arg1 willSendRequestForAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (BOOL)connectionShouldUseCredentialStorage:(NSURLConnection *)arg1;
- (void)connection:(NSURLConnection *)arg1 didFailWithError:(NSError *)arg2;
@end

