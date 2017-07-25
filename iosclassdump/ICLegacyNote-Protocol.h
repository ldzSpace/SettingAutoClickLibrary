//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSManagedObjectContext, NSManagedObjectID, NSNumber, NSString;

@protocol ICLegacyNote <NSObject>
- (NSArray *)attachments;
- (id <ICLegacyAttachment>)createAttachmentWithName:(NSString *)arg1;
- (NSDate *)creationDate;
- (id <ICLegacyFolder>)folder;
- (NSString *)htmlString;
- (NSString *)identifier;
- (NSNumber *)integerId;
- (_Bool)isMarkedForDeletion;
- (_Bool)isPlainText;
- (NSManagedObjectContext *)managedObjectContext;
- (void)markForDeletion;
- (NSDate *)modificationDate;
- (NSManagedObjectID *)objectID;
- (void)setHtmlString:(NSString *)arg1;
- (NSString *)title;
@end
