// Copyright (c) 2011-2014 The vhkdCoin Core vhkd
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_BITCOINADDRESSVALIDATOR_H
#define BITCOIN_QT_BITCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class vhkdCoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit vhkdCoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** vhkdCoin address widget validator, checks for a valid vhkd address.
 */
class vhkdCoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit vhkdCoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // BITCOIN_QT_BITCOINADDRESSVALIDATOR_H
