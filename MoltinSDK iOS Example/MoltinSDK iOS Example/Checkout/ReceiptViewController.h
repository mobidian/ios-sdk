//
//  ReceiptViewController.h
//  MoltinSDK iOS Example
//
//  Created by Gasper Rebernak on 08/07/15.
//  Copyright (c) 2015 Gasper Rebernak. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ReceiptViewController : UIViewController

@property (strong, nonatomic) NSArray *products;
@property (strong, nonatomic) NSDictionary *reciept;

@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *tableViewHeightConstraint;
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (weak, nonatomic) IBOutlet UILabel *lbShippingCompany;
@property (weak, nonatomic) IBOutlet UILabel *lbShippingPrice;
@property (weak, nonatomic) IBOutlet UILabel *lbShippingAriveBy;

@property (weak, nonatomic) IBOutlet UILabel *lbAddressLine1;
@property (weak, nonatomic) IBOutlet UILabel *lbAddressLine2;
@property (weak, nonatomic) IBOutlet UILabel *lbAddressCountry;

@property (weak, nonatomic) IBOutlet UILabel *lbPaymentCard;
@property (weak, nonatomic) IBOutlet UILabel *lbPaymentSubtotal;
@property (weak, nonatomic) IBOutlet UILabel *lbPaymentDelivery;
@property (weak, nonatomic) IBOutlet UILabel *lbPaymentTotal;

@end
