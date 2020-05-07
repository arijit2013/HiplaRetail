//
//  ProductbycatbyuserpreferenceViewController.h
//  Jing
//
//  Created by fnspl3 on 05/12/17.
//  Copyright © 2017 fnspl3. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ViewController.h"
#import "NSDictionary+NullReplacement.h"
#import "MenuTableViewController.h"
#import "MapPin.h"
#import "APIManager.h"
#import "ZoneDetection.h"
#import <Navigine/Navigine.h>

@interface ProductbycatbyuserpreferenceViewController : ViewController<UICollectionViewDataSource,UICollectionViewDelegate,sharedZoneDetectionDelegate,NavigineCoreDelegate,NavigineCoreNavigationDelegate,NavigineCoreLocationDelegate,NavigineCoreBluetoothDelegate>
{
    APIManager *api;
    KYDrawerController *drawer;
    MenuTableViewController *menu;
    UINavigationController *localNavigationController;
}
@property (weak, nonatomic) IBOutlet UICollectionView *subcategoryCollectionView;
@property NSMutableArray* productbycatbyuserpreferenceproductbyCatlistInfo;
@property (weak, nonatomic) IBOutlet UIView *viewCount;
@property (weak, nonatomic) IBOutlet UILabel *lblCount;

@property (nonatomic, strong) NSString* currentZoneName;
@property (nonatomic, strong) NSArray *zoneArray;
@property (nonatomic, strong) NavigineCore *navigineCore;

- (IBAction)menuBtn:(id)sender;
- (IBAction)addToCart:(id)sender;
- (IBAction)searchBtn:(id)sender;
- (IBAction)homeBtn:(id)sender;

@end
