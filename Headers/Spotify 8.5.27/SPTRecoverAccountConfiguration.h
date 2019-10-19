//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTDataLoaderFactory, SPTLoginTheme, SPTRecoverAccountLoggerFactory;
@protocol SPTModalPresentationController;

@interface SPTRecoverAccountConfiguration : NSObject
{
    SPTLoginTheme *_theme;
    SPTRecoverAccountLoggerFactory *_loggerFactory;
    id <SPTModalPresentationController> _presentationController;
    SPTDataLoaderFactory *_dataLoaderFactory;
}

@property(readonly, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
@property(readonly, nonatomic) id <SPTModalPresentationController> presentationController; // @synthesize presentationController=_presentationController;
@property(readonly, nonatomic) SPTRecoverAccountLoggerFactory *loggerFactory; // @synthesize loggerFactory=_loggerFactory;
@property(readonly, nonatomic) SPTLoginTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (id)provideDataLoader;
- (id)initWithTheme:(id)arg1 dataLoaderFactory:(id)arg2 loggerFactory:(id)arg3 presentationController:(id)arg4;

@end
