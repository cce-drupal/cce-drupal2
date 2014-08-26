<?php
/**
 * @file
 * content_type.del.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'del',
  'name' => 'DEL',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__del' => 'variable.field_bundle_settings_node__del',
  'variable.node_options_del' => 'variable.node_options_del',
  'variable.node_preview_del' => 'variable.node_preview_del',
  'variable.node_submitted_del' => 'variable.node_submitted_del',
  'variable.comment_default_per_page_del' => 'variable.comment_default_per_page_del',
  'variable.comment_form_location_del' => 'variable.comment_form_location_del',
  'variable.comment_preview_del' => 'variable.comment_preview_del',
  'variable.comment_subject_field_del' => 'variable.comment_subject_field_del',
);

$optional = array(
  'field.node.body.del' => 'field.node.body.del',
  'field.node.field_authornameemail.del' => 'field.node.field_authornameemail.del',
  'field.node.field_pubdate.del' => 'field.node.field_pubdate.del',
  'field.node.field_url.del' => 'field.node.field_url.del',
  'permission.create_del_content' => 'permission.create_del_content',
  'permission.edit_own_del_content' => 'permission.edit_own_del_content',
  'permission.edit_any_del_content' => 'permission.edit_any_del_content',
  'permission.delete_own_del_content' => 'permission.delete_own_del_content',
  'permission.delete_any_del_content' => 'permission.delete_any_del_content',
);

$modules = array(
  0 => 'node',
);
