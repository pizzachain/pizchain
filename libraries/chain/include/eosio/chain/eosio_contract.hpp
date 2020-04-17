#pragma once

#include <eosio/chain/types.hpp>
#include <eosio/chain/contract_types.hpp>

namespace eosio { namespace chain {

   class apply_context;

   /**
    * @defgroup native_action_handlers Native Action Handlers
    */
   ///@{
   void apply_piz_newaccount(apply_context&);
   void apply_piz_updateauth(apply_context&);
   void apply_piz_deleteauth(apply_context&);
   void apply_piz_linkauth(apply_context&);
   void apply_piz_unlinkauth(apply_context&);

   /*
   void apply_piz_postrecovery(apply_context&);
   void apply_piz_passrecovery(apply_context&);
   void apply_piz_vetorecovery(apply_context&);
   */

   void apply_piz_setcode(apply_context&);
   void apply_piz_setabi(apply_context&);

   void apply_piz_canceldelay(apply_context&);
   ///@}  end action handlers

} } /// namespace eosio::chain
