/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreServices/SSRequest.h>

@class NSNumber;

@interface SSRentalCheckinRequest : SSRequest
{
    NSNumber *_accountIdentifier;
    NSNumber *_rentalKeyIdentifier;
}

- (BOOL)issueRequestForIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)handleFinishResponse:(id)arg1 error:(id *)arg2;
@property(readonly) NSNumber *rentalKeyIdentifier;
@property(readonly) NSNumber *accountIdentifier;
- (id)initWithPropertyListEncoding:(id)arg1;
- (id)copyPropertyListEncoding;
- (void)dealloc;
- (id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2;
- (id)init;

@end
