//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFilePath, DVTSigningCertificate, MISSING_TYPE;

@interface _TtC13DVTFoundation12DVTXARSigner : NSObject
{
    MISSING_TYPE *toolname;
    MISSING_TYPE *pkgPath;
    MISSING_TYPE *certificate;
    MISSING_TYPE *logAspect;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)signWithCmsSignature:(id)arg1 outputPath:(id)arg2 error:(id *)arg3;
- (id)simulateAndReturnError:(id *)arg1;
- (id)initWithPKGPath:(id)arg1 certificate:(id)arg2 logAspect:(id)arg3 error:(id *)arg4;
@property(nonatomic, readonly) DVTSigningCertificate *certificate; // @synthesize certificate;
@property(nonatomic, readonly) DVTFilePath *pkgPath; // @synthesize pkgPath;

@end

