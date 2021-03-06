//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

@class ASToastPresentationWindow, NSString, UIImage, UIImageView, UILabel, UIVisualEffectView;

@interface ASToastViewController : UIViewController
{
    NSString *_message;
    UIImage *_image;
    ASToastPresentationWindow *_presentationWindow;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UIImageView *_imageView;
    UIVisualEffectView *_toastView;
}

+ (id)_fontWithSize:(double)arg1 textStyleAttribute:(struct __CFString *)arg2;
+ (id)_secondaryLabelFont;
+ (id)_primaryLabelFont;
@property(retain, nonatomic) UIVisualEffectView *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(retain, nonatomic) ASToastPresentationWindow *presentationWindow; // @synthesize presentationWindow=_presentationWindow;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)_dismissAfterDelay:(double)arg1;
- (void)present;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1 message:(id)arg2 image:(id)arg3;

// Remaining properties
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

