<?php
/**
 * @file
 * commons_follow_user.features.inc
 */

/**
 * Implements hook_views_api().
 */
function commons_follow_user_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function commons_follow_user_flag_default_flags() {
  $flags = array();
  // Exported flag: "Commons Follow (Users)".
  $flags['commons_follow_user'] = array(
    'content_type' => 'user',
    'title' => 'Commons Follow (Users)',
    'global' => '0',
    'types' => array(),
    'flag_short' => 'Follow',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Following',
    'unflag_long' => '',
    'unflag_message' => 'Follow',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
      ),
      'unflag' => array(
        0 => '2',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_profile' => 1,
    'access_uid' => 'others',
    'module' => 'commons_follow_user',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}

/**
 * Implements hook_default_message_type().
 */
function commons_follow_user_default_message_type() {
  $items = array();
  $items['commons_follow_user_user_followed'] = entity_import('message_type', '{
    "name" : "commons_follow_user_user_followed",
    "description" : "commons_follow_user_user_followed",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : { "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" } },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "[message:user:picture]",
          "format" : "filtered_html",
          "safe_value" : "[message:user:picture]"
        },
        {
          "value" : "\\u003Ca href=\\u0022[message:user:url:absolute]\\u0022\\u003E@{message:user:name}\\u003C\\/a\\u003E is now following \\u003Ca href=\\u0022[message:field-target-users:0:url]\\u0022\\u003E[message:field-target-users:0:name]\\u003C\\/a\\u003E",
          "format" : "full_html",
          "safe_value" : "\\u003Ca href=\\u0022[message:user:url:absolute]\\u0022\\u003E@{message:user:name}\\u003C\\/a\\u003E is now following \\u003Ca href=\\u0022[message:field-target-users:0:url]\\u0022\\u003E[message:field-target-users:0:name]\\u003C\\/a\\u003E"
        }
      ]
    }
  }');
  return $items;
}
