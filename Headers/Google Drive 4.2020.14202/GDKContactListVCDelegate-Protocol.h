//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GDKContactListVC, UIImage;
@protocol GDKContact;

@protocol GDKContactListVCDelegate <NSObject>
- (void)contactListVC:(GDKContactListVC *)arg1 didSelectContact:(id <GDKContact>)arg2 contactAvatar:(UIImage *)arg3;

@optional
- (void)contactListVC:(GDKContactListVC *)arg1 didUpdateWithNumberOfContacts:(unsigned long long)arg2;
@end

