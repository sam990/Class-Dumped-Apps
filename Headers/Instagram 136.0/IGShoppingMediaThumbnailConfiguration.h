//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGMediaThumbnailConfigurationType-Protocol.h>

@class NSString;

@interface IGShoppingMediaThumbnailConfiguration : NSObject <IGMediaThumbnailConfigurationType>
{
    NSString *_productId;
}

- (void).cxx_destruct;
- (unsigned long long)checkmarkPosition;
- (unsigned long long)carouselIndex:(id)arg1;
- (_Bool)showGlyphs;
- (_Bool)showHighlight;
- (_Bool)allowSelection;
- (id)initWithProductId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

