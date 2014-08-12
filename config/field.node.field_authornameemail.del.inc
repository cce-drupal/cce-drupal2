<?php
/**
 * @file
 * field.node.field_authornameemail.del.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_authornameemail' => array(
              'email' => 'field_authornameemail_email',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_authornameemail' => array(
              'email' => 'field_authornameemail_email',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'field_name' => 'field_authornameemail',
    'type' => 'email',
    'module' => 'email',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'email' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'AuthorNameEmail',
    'widget' => array(
      'weight' => '7',
      'type' => 'email_textfield',
      'module' => 'email',
      'active' => 1,
      'settings' => array(
        'size' => '60',
      ),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'email_default',
        'settings' => array(),
        'module' => 'email',
        'weight' => 3,
      ),
      'teaser' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_authornameemail',
    'entity_type' => 'node',
    'bundle' => 'del',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.del' => 'content_type.del',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'email',
);
