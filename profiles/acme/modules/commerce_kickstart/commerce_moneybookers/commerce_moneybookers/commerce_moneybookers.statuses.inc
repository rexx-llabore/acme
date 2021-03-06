<?php

function _commerce_moneybookers_payment_acknowledgements() {
  return array(
    '000.000.000' => t('Transaction succeeded'),
    '000.100.110' => t('Request successfully processed in "Merchant in Integrator Test Mode"'),
    '000.100.111' => t('Request successfully processed in "Merchant in Validator Test Mode"'),
    '000.100.112' => t('Request successfully processed in "Merchant in Connector Test Mode"'),
    '000.100.200' => t('Reason not Specified'),
    '000.100.201' => t('Account or Bank Details Incorrect'),
    '000.100.202' => t('Account Closed'),
    '000.100.203' => t('Insufficient Funds'),
    '000.100.204' => t('Mandate not Valid'),
    '000.100.205' => t('Mandate Cancelled'),
    '000.100.206' => t('Revocation or Dispute'),
    '000.100.207' => t('Cancellation in Clearing Network'),
    '000.100.208' => t('Account Blocked'),
    '000.100.209' => t('Account does not exist'),
    '000.100.210' => t('Invalid Amount'),
    '000.100.220' => t('Fraudulent Transaction'),
    '000.100.221' => t('Merchandise Not Received'),
    '000.100.222' => t('Transaction Not Recognized By Cardholder'),
    '000.100.223' => t('Service Not Rendered'),
    '000.100.224' => t('Duplicate Processing'),
    '000.100.225' => t('Credit Not Processed'),
    '000.100.226' => t('Cannot be settled'),
    '000.100.227' => t('Configuration Issue'),
    '000.100.228' => t('Temporary Communication Error - Retry'),
    '000.100.230' => t('Unauthorised Charge'),
    '000.100.299' => t('Unspecified (Technical)'),
    '000.200.000' => t('Transaction pending'),
    '000.300.000' => t('Two-step transaction succeeded'),
    '000.400.000' => t('Transaction succeeded (please review manually due to fraud suspicion)'),
    '000.400.010' => t('Transaction succeeded (please review manually due to AVS return code)'),
    '000.400.020' => t('Transaction succeeded (please review manually due to CVV return code)'),
    '000.400.030' => t('Transaction succeeded (please review manually due to failed automatic reversal)'),
    '000.400.040' => t('Transaction succeeded (please review manually due to amount mismatch)'),
    '000.400.050' => t('Transaction succeeded (please review manually because transaction is pending)'),
    '000.500.000' => t('Transaction succeeded - very good rating'),
    '000.500.100' => t('Transaction succeeded (address corrected)'),
  );
}
