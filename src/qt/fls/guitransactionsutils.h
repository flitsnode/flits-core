// Copyright (c) 2019 The PIVX developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef FURSZY_FLS_GUITRANSACTIONSUTILS_H
#define FURSZY_FLS_GUITRANSACTIONSUTILS_H

#include "walletmodel.h"
#include "qt/fls/pwidget.h"


namespace GuiTransactionsUtils {

    // Process WalletModel::SendCoinsReturn and generate a pair consisting
    // of a message and message flags for use in emit message().
    // Additional parameter msgArg can be used via .arg(msgArg).
    QString ProceFLSendCoinsReturn(
            PWidget::Translator* parent,
            const WalletModel::SendCoinsReturn& sendCoinsReturn,
            WalletModel* walletModel,
            CClientUIInterface::MessageBoxFlags& informType,
            const QString& msgArg = QString(),
            bool fPrepare = false
    );

    void ProceFLSendCoinsReturnAndInform(PWidget* parent,
            const WalletModel::SendCoinsReturn& sendCoinsReturn,
            WalletModel* walletModel,
            const QString& msgArg = QString(),
            bool fPrepare = false
    );


}


#endif //FURSZY_FLS_GUITRANSACTIONSUTILS_H
