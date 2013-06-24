//
//  MYMasterCollectionViewController.m
//  Photo Browser
//
//  Created by Nathan Herald on 6/23/13.
//  Copyright (c) 2013 The Myobie Corporation. All rights reserved.
//

#import "MYMasterCollectionViewController.h"
#import "MYPersistence.h"
#import "MYCustomCell.h"

@interface MYMasterCollectionViewController ()
@property (readonly, strong, nonatomic) NSArray *content;
- (void)configureCell:(UICollectionViewCell *)cell atIndexPath:(NSIndexPath *)indexPath;
@end

@implementation MYMasterCollectionViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    NSLog(@"View did load!");
    _content = @[@"1", @"2", @"3", @"4", @"5", @"6", @"7", @"8", @"9", @"10", @"11", @"12", @"13", @"14", @"15", @"16", @"17", @"18", @"19", @"20"];
}

- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView *)collectionView
{
    return 1;
}

- (NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section
{
    NSUInteger num = [_content count];
    return num;
}

- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath
{
    NSLog(@"Cell");
    MYCustomCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:@"CustomCell" forIndexPath:indexPath];
    [self configureCell:cell atIndexPath:indexPath];
    return cell;
}

- (void)configureCell:(MYCustomCell *)cell atIndexPath:(NSIndexPath *)indexPath
{
    NSString *numText = [_content objectAtIndex:indexPath.row];
    cell.label.text = numText;
}

- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    
}

@end
