/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface ISCertificate : NSObject
{
    struct __SecTrust *_trust;
}

- (void)_invalidate;
- (void)setCertificateData:(id)arg1;
- (BOOL)isValid;
- (BOOL)checkData:(id)arg1 againstAppleSignature:(id)arg2;
- (BOOL)checkData:(id)arg1 againstSignature:(id)arg2;
- (void)dealloc;

@end

