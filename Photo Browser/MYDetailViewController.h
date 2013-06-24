//
//  MYDetailViewController.h
//  Photo Browser
//
//  Created by Nathan Herald on 6/23/13.
//  Copyright (c) 2013 Nathan Herald. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MYDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
