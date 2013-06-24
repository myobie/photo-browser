//
//  MYMasterCollectionViewController.h
//  Photo Browser
//
//  Created by Nathan Herald on 6/23/13.
//  Copyright (c) 2013 The Myobie Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MYMasterCollectionViewController : UICollectionViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
