/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iAdCore/ADJavaScriptObject.h>

@class NSArray, NSDate, NSNumber, NSString, SSItem, WebScriptObject;

@interface ADStoreItemJSO : ADJavaScriptObject
{
    WebScriptObject *_jsListener;
    NSNumber *_adamId;
    NSString *_title;
    NSArray *_offers;
    NSDate *_expirationDate;
    NSArray *_previews;
    int _error;
    SSItem *_storeItem;
    BOOL _privilegedClient;
}

+ (id)scriptingKeys;
@property(nonatomic, getter=isPrivilegedClient) BOOL privilegedClient; // @synthesize privilegedClient=_privilegedClient;
@property(retain, nonatomic) SSItem *storeItem; // @synthesize storeItem=_storeItem;
@property(nonatomic) int error; // @synthesize error=_error;
@property(readonly) NSArray *previews; // @synthesize previews=_previews;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly) NSArray *offers; // @synthesize offers=_offers;
@property(readonly) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSNumber *adamId; // @synthesize adamId=_adamId;
@property(retain, nonatomic) WebScriptObject *jsListener; // @synthesize jsListener=_jsListener;
- (void)setPreviews:(id)arg1;
- (void)setOffers:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setAdamId:(id)arg1;
- (id)initWithAdamId:(id)arg1;
- (void)dealloc;

@end
