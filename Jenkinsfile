pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                cmake
            }
        }
        stage('Test') {
            steps {
                echo 'Testing..'
            }
        }
    }
}