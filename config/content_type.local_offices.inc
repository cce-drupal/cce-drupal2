<?php
/**
 * @file
 * content_type.local_offices.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'local_offices',
  'name' => 'Local Offices',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__local_offices' => 'variable.field_bundle_settings_node__local_offices',
  'variable.node_options_local_offices' => 'variable.node_options_local_offices',
  'variable.node_preview_local_offices' => 'variable.node_preview_local_offices',
  'variable.node_submitted_local_offices' => 'variable.node_submitted_local_offices',
  'variable.comment_default_per_page_local_offices' => 'variable.comment_default_per_page_local_offices',
  'variable.comment_form_location_local_offices' => 'variable.comment_form_location_local_offices',
  'variable.comment_preview_local_offices' => 'variable.comment_preview_local_offices',
  'variable.comment_subject_field_local_offices' => 'variable.comment_subject_field_local_offices',
);

$optional = array(
  'field.node.body.local_offices' => 'field.node.body.local_offices',
  'field.node.field_url.local_offices' => 'field.node.field_url.local_offices',
  'field.node.field_pubdate.local_offices' => 'field.node.field_pubdate.local_offices',
  'field.node.field_facebook.local_offices' => 'field.node.field_facebook.local_offices',
  'field.node.field_twitter.local_offices' => 'field.node.field_twitter.local_offices',
  'field.node.field_youtube.local_offices' => 'field.node.field_youtube.local_offices',
  'field.node.field_flickr.local_offices' => 'field.node.field_flickr.local_offices',
  'field.node.field_authornameemail.local_offices' => 'field.node.field_authornameemail.local_offices',
  'permission.create_local_offices_content' => 'permission.create_local_offices_content',
  'permission.edit_own_local_offices_content' => 'permission.edit_own_local_offices_content',
  'permission.edit_any_local_offices_content' => 'permission.edit_any_local_offices_content',
  'permission.delete_own_local_offices_content' => 'permission.delete_own_local_offices_content',
  'permission.delete_any_local_offices_content' => 'permission.delete_any_local_offices_content',
);

$modules = array(
  0 => 'node',
);
