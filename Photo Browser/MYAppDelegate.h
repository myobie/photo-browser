//
//  MYAppDelegate.h
//  Photo Browser
//
//  Created by Nathan Herald on 6/23/13.
//  Copyright (c) 2013 Nathan Herald. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MYAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
