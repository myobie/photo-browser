//
//  MYPersistence.h
//  Photo Browser
//
//  Created by Nathan Herald on 6/23/13.
//  Copyright (c) 2013 Nathan Herald. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MYPersistence : NSObject

+ (MYPersistence *)shared;
- (NSManagedObjectModel *)managedObjectModel;
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;

@end
