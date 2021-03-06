//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectContext, NSManagedObjectID, NSSet, NSString;

@protocol ICLegacyFolder <NSObject>
- (id <ICLegacyAccount>)account;
- (void)addNotesObject:(id <ICLegacyNote>)arg1;
- (NSSet *)changes;
- (NSManagedObjectContext *)managedObjectContext;
- (NSString *)name;
- (id <ICLegacyNote>)newNoteInContext:(struct NoteContext *)arg1;
- (NSManagedObjectID *)objectID;
- (id <ICLegacyFolder>)parentFolder;
- (NSString *)title;
@end

