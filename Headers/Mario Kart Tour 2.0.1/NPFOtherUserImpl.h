//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NPFOtherUserMapper;
@protocol ServiceLocator;

@interface NPFOtherUserImpl : NSObject
{
    id <ServiceLocator> _locator;
    NPFOtherUserMapper *_mapper;
}

@property(retain) NPFOtherUserMapper *mapper; // @synthesize mapper=_mapper;
@property(retain) id <ServiceLocator> locator; // @synthesize locator=_locator;
- (void).cxx_destruct;
- (void)getAsList:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (id)init;

@end

