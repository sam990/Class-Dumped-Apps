//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class DBFileEntryListLayoutView, DBThemeTemplatesFileCell, NSString, UIImageView, UILabel;

@interface DBUploadPhotosBulkRenameReorderCell : UITableViewCell
{
    _Bool _isPlaceholderThumbnail;
    UILabel *_titleLabel;
    NSString *_localIdentifier;
    DBThemeTemplatesFileCell *_currentTemplates;
    DBFileEntryListLayoutView *_layoutView;
    UIImageView *_thumbnailImageView;
}

@property(nonatomic) _Bool isPlaceholderThumbnail; // @synthesize isPlaceholderThumbnail=_isPlaceholderThumbnail;
@property(retain, nonatomic) UIImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(retain, nonatomic) DBFileEntryListLayoutView *layoutView; // @synthesize layoutView=_layoutView;
@property(retain, nonatomic) DBThemeTemplatesFileCell *currentTemplates; // @synthesize currentTemplates=_currentTemplates;
@property(copy, nonatomic) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)db_updateCurrentTemplates;
- (void)setThumbnailImage:(id)arg1 isPlaceholder:(_Bool)arg2;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

