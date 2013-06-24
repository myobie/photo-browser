//
//  MYMasterViewController.h
//  Photo Browser
//
//  Created by Nathan Herald on 6/23/13.
//  Copyright (c) 2013 Nathan Herald. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MYMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
